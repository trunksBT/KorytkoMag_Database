#pragma once

#include <array>
#include <string>

namespace constraints
{
namespace database
{

static const std::string GET = "get";
static const std::string PUT = "put";
static const std::string DELETE = "delete";

constexpr std::size_t NUMBER_OF_CONSTRAINTS = 3;

static const std::array<std::string, NUMBER_OF_CONSTRAINTS> values {{
   DELETE,
   GET,
   PUT,
}};

}
}