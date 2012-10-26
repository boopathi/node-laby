{
	"targets" : [{
		"target_name": "labyrinth",
		"sources": [
			"src/orm.cpp",
			"src/labyrinth.cpp"
		],
		"ldflags": [
			"-lmysqlcppconn"
		],
		"cflags!": ['-fno-exceptions'],
		"cflags_cc!": ['-fno-exceptions']
	}]
}
