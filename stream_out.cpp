#include <iostream>
#include <vector>
#include <map>

template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& v) {
  out << "[";
  bool is_first = true;
  for (typename std::vector<T>::const_iterator it = v.begin(); it != v.end(); ++it) {
    if (!is_first) out << ", ";
    is_first = true;
    out << *it;
  }
  out << "]";
  return out;
}

template <typename K, typename V>
std::ostream& operator<<(std::ostream& out, const std::map<K, V>& v) {
  out << "{";
  bool is_first = true;
  for (typename std::map<K, V>::const_iterator it = v.begin(); it != v.end(); ++it) {
    if (!is_first) out << ", ";
    is_first = true;
    out << it->first << ": " << it->second;
  }
  out << "}";
  return out;
}
