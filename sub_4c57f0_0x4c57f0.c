// 函数名称: sub_4c57f0
// 虚拟地址: 0x4c57f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c57f0(char* arg1)
{
    // 第一条实际指令: void outputString
    void outputString
    int32_t eax_1 = __security_cookie ^ &outputString
    void arg_8
    void* var_414 = &arg_8
    int32_t var_418 = 0x400
    char* var_41c = &outputString
    int32_t edx
    uint32_t eax_3 = __vcasan::DumpThisThread(&arg_8, edx, arg1, var_41c, var_418, var_414)
    
    if (*(&var_41c + eax_3 + 0xb) != 0xa)
        if (eax_3 s>= 0x3ff)
            *(&var_41c + eax_3 + 0xb) = 0xa
        else
            *(&var_41c + eax_3 + 0xc) = 0xa
            char var_40f[0x403]
            var_40f[eax_3] = 0
    
    OutputDebugStringA(&outputString)
    int32_t result = sub_4c56f0(&outputString)
    sub_5a6aba(eax_1 ^ &outputString)
    return result
}
