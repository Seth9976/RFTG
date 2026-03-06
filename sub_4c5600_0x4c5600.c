// 函数名称: sub_4c5600
// 虚拟地址: 0x4c5600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LPTOP_LEVEL_EXCEPTION_FILTERsub_4c5600()
{
    // 第一条实际指令: char* eax = sub_4c6050()
    char* eax = sub_4c6050()
    sub_4ffc50(eax)
    char* var_8_1 = eax
    sub_5a733b(&data_27e7ab0, "%slog.txt")
    GetFullPathNameA(&data_27e7ab0, 0x104, &data_27e7ab0, nullptr)
    SymInitialize(GetCurrentProcess(), nullptr, 1)
    return SetUnhandledExceptionFilter(sub_4c54f0)
}
