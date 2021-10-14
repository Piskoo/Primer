#pragma once

namespace sp {
	template<class T>
	class Vector {
		size_t size;
		T* data;
	public:
		Vector(const size_t s) : size(s) {
			data = new T[size];
		}

		Vector(const size_t s, const T& value) : size(s) {
			data = new T[size];
			for (size_t i = 0; i != size; ++i) {
				data[i] = value;
			}
		}

		Vector(const size_t s, T (*f)(const size_t index)) : size(s) {
			data = new T[size];
			for (size_t i = 0; i != size; ++i) {
				data[i] = f(i);
			}
		}

		~Vector() noexcept {
			delete[] data;
		}
		const T& operator[] (const size_t index) const {
			return data[index];
		}

		size_t Size() const noexcept {
			return size;
		}
	};
}