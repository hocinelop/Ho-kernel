diff --git a/arch/arm64/configs/courbet_defconfig b/arch/arm64/configs/courbet_defconfig
index 1da68259b78c..b81e139cd235 100644
--- a/arch/arm64/configs/courbet_defconfig
+++ b/arch/arm64/configs/courbet_defconfig
@@ -6022,6 +6022,7 @@ CONFIG_CRYPTO_DEFLATE=y
 # CONFIG_CRYPTO_LZO is not set
 # CONFIG_CRYPTO_842 is not set
 CONFIG_CRYPTO_LZ4=y
+CONFIG_CRYPTO_LZ4KD=y
 # CONFIG_CRYPTO_LZ4HC is not set
 # CONFIG_CRYPTO_ZSTD is not set
 
@@ -6115,7 +6116,9 @@ CONFIG_AUDIT_ARCH_COMPAT_GENERIC=y
 CONFIG_ZLIB_INFLATE=y
 CONFIG_ZLIB_DEFLATE=y
 CONFIG_LZ4_COMPRESS=y
+CONFIG_LZ4KD_COMPRESS=y
 CONFIG_LZ4_DECOMPRESS=y
+CONFIG_LZ4KD_DECOMPRESS=y
 # CONFIG_XZ_DEC is not set
 # CONFIG_XZ_DEC_BCJ is not set
 CONFIG_DECOMPRESS_GZIP=y
diff --git a/arch/arm64/configs/sweet_defconfig b/arch/arm64/configs/sweet_defconfig
index 8586f8b90483..48624226e4ad 100644
--- a/arch/arm64/configs/sweet_defconfig
+++ b/arch/arm64/configs/sweet_defconfig
@@ -6024,6 +6024,7 @@ CONFIG_CRYPTO_DEFLATE=y
 # CONFIG_CRYPTO_LZO is not set
 # CONFIG_CRYPTO_842 is not set
 CONFIG_CRYPTO_LZ4=y
+CONFIG_CRYPTO_LZ4KD=y
 # CONFIG_CRYPTO_LZ4HC is not set
 # CONFIG_CRYPTO_ZSTD is not set
 
@@ -6117,7 +6118,9 @@ CONFIG_AUDIT_ARCH_COMPAT_GENERIC=y
 CONFIG_ZLIB_INFLATE=y
 CONFIG_ZLIB_DEFLATE=y
 CONFIG_LZ4_COMPRESS=y
+CONFIG_LZ4KD_COMPRESS=y
 CONFIG_LZ4_DECOMPRESS=y
+CONFIG_LZ4KD_DECOMPRESS=y
 # CONFIG_XZ_DEC is not set
 # CONFIG_XZ_DEC_BCJ is not set
 CONFIG_DECOMPRESS_GZIP=y
