// 函数名称: sub_5ab41b
// 虚拟地址: 0x5ab41b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5ab41b(int32_t arg1, char* arg2) __noreturn
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_2c = edi
    uint32_t dwExceptionCode
    __builtin_memcpy(&dwExceptionCode, 0x6b03d8, 0x20)
    int32_t var_c = arg1
    char* var_8 = arg2
    uint32_t arguments
    
    if (arg2 != 0 && (*arg2 & 8) != 0)
        arguments = 0x1994000
    
    uint32_t dwExceptionFlags
    uint32_t nNumberOfArguments
    RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, &arguments)
    noreturn
}
