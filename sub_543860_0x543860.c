// 函数名称: sub_543860
// 虚拟地址: 0x543860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_543860()
{
    // 第一条实际指令: void var_174
    void var_174
    int32_t eax_1 = __security_cookie ^ &var_174
    char var_118 = 0
    int128_t var_117[0x10]
    sub_5abfc0(&var_117, 0, 0x103)
    int32_t param0
    sub_5abfc0(&param0, 0, 0x58)
    int32_t edx = data_3078818
    param0 = 0x58
    int32_t var_16c = edx
    char* var_154 = &var_118
    int32_t var_150 = 0x104
    int32_t esi
    int32_t var_164 = esi
    int32_t var_158 = 0
    int32_t var_14c = 0
    int32_t var_148 = 0
    int32_t var_144 = 0
    int32_t var_13c = 0x2001808
    
    if (GetOpenFileNameA(&param0) == 0)
        BOOL eax_2
        eax_2.b = 0
        sub_5a6aba(eax_1 ^ &var_174)
        return eax_2
    
    sub_4c4590(&var_118)
    int32_t* eax_4
    eax_4.b = 1
    sub_5a6aba(eax_1 ^ &var_174)
    return eax_4
}
