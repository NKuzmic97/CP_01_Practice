#include <iostream>
#include <string>
#include <vector>
struct Vertex {
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) {
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

void Function(const std::vector<Vertex>& vertices) {

}

int main() {
	std::vector<Vertex> vertices;
	Function(vertices);
	vertices.push_back({ 1,2,3 });
	vertices.push_back({ 4,5,6 });
	for (int i = 0; i < vertices.size(); i++)
		std::cout << vertices[i] << std::endl;

	vertices.erase(vertices.begin() + 1);

	for (Vertex& v : vertices)
	std::cout << v << std::endl;
	std::cin.get();
}