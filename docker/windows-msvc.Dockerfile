ARG DEBIAN_VERSION=13
FROM debian:${DEBIAN_VERSION}

ENV DEBIAN_FRONTEND="noninteractive"

RUN apt-get update && \
	apt-get install --yes --no-install-recommends \
		ca-certificates \
		ccache \
		clang \
		cmake \
		curl \
		lld \
		llvm \
		ninja-build \
		tar \
	&& rm -rf /var/lib/apt/lists/*

# Debian keeps the MSVC drivers in /usr/lib/llvm-*/bin.
# clang-cl is not shipped; the clang driver enters that mode from argv[0].
RUN set -eu; \
	llvm_bin="$(ls -d /usr/lib/llvm-*/bin | sort -V | tail -1)"; \
	test -x "${llvm_bin}/clang"; \
	test -x "${llvm_bin}/lld-link"; \
	test -x "${llvm_bin}/llvm-rc"; \
	test -x "${llvm_bin}/llvm-lib"; \
	ln -sfn "${llvm_bin}/clang" /usr/local/bin/clang-cl; \
	ln -sfn "${llvm_bin}/lld-link" /usr/local/bin/lld-link; \
	ln -sfn "${llvm_bin}/llvm-rc" /usr/local/bin/llvm-rc; \
	ln -sfn "${llvm_bin}/llvm-lib" /usr/local/bin/llvm-lib; \
	clang-cl --version; \
	lld-link --version

ARG XWIN_VERSION=0.10.0
RUN curl --fail --location --silent --show-error \
		-o /tmp/xwin.tar.gz \
		"https://github.com/Jake-Shadle/xwin/releases/download/${XWIN_VERSION}/xwin-${XWIN_VERSION}-x86_64-unknown-linux-musl.tar.gz" && \
	tar -C /usr/local/bin --strip-components=1 -xzf /tmp/xwin.tar.gz \
		"xwin-${XWIN_VERSION}-x86_64-unknown-linux-musl/xwin" && \
	rm /tmp/xwin.tar.gz && \
	xwin --accept-license splat --output /opt/xwin && \
	rm -rf /opt/xwin/.xwin-cache /.xwin-cache /root/.xwin-cache

ENV PATH="/usr/lib/ccache:${PATH}"
ENV CMAKE_C_COMPILER_LAUNCHER="ccache"
ENV CMAKE_CXX_COMPILER_LAUNCHER="ccache"
ENV CCACHE_DIR="/ccache"
WORKDIR /src
