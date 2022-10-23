BUILD_DIR = build
PROJECT_NAME = cmake-practice

.PHONY: conan
conan:
	conan install --build missing -if ${BUILD_DIR} .

.PHONY: cmake
cmake:
	cmake -S . -B ${BUILD_DIR} -G 'Unix Makefiles'

.PHONY: build
build:
	make -C ${BUILD_DIR}

.PHONY: run
run:
	@${BUILD_DIR}/bin/${PROJECT_NAME}
