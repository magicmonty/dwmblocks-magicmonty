# Maintainer: Martin Gondermann (magicmonty) <magicmonty@pagansoft.de>
pkgname=dwmblocks-magicmonty-git
pkgver=1.0.r13.af63299
pkgrel=1
pkgdesc="My own build of dwmblocks for use with my build of dwm."
arch=(x86_64 i686)
url="https://github.com/magicmonty/dwmblocks-magicmonty.git"
license=('MIT')
groups=()
depends=(ttf-hack ttf-joypixels dwm-magicmonty-git libxft-bgra-git)
makedepends=(make)
checkdepends=()
optdepends=()
provides=(dwmblocks)
conflicts=(dwmblocks)
replaces=()
backup=()
options=()
source=("git+$url")
noextract=()
md5sums=('SKIP')
validpgpkeys=()

pkgver() {
  cd "${_pkgname}"
  printf "1.0.r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

package() {
  cd dwmblocks-magicmonty
  mkdir -p ${pkgdir}/opt/${pkgname}
  cp -rf * ${pkgdir}/opt/${pkgname}
  make PREFIX=/usr DESTDIR="${pkgdir}" install
  install -Dm644 LICENSE "${pkgdir}/usr/share/licenses/dwmblocks-magicmonty/LICENSE"
  install -Dm644 README.md "${pkgdir}/usr/share/doc/dwmblocks-magicmonty/README.md"
  chmod 0755 ${pkgdir}/opt/${pkgname}/scripts/*
}

