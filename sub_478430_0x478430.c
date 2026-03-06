// 函数名称: sub_478430
// 虚拟地址: 0x478430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_478430(char* arg1)
{
    // 第一条实际指令: char const* const var_30 = "idle1"
    char const* const var_30 = "idle1"
    char const* const var_2c = "idle1"
    char const* const var_28 = "idle1"
    char const* const var_24 = "idle1"
    char const* const var_20 = "idle1"
    char const* const var_1c = "idle1"
    char const* const var_18 = "idle_02"
    char const* const var_14 = "idle_02"
    char const* const var_10 = "idle_03"
    char const* const var_c = "idle_03"
    char const* const var_8 = "idle_04"
    int32_t ebx = (&var_30)[modu.dp.d(0:(sub_4c95c0()), 0xb)]
    void* esi = *(arg1 + 0x1c)
    int32_t* edi = *(esi + 4)
    int32_t var_44 = ebx
    int32_t eax_2
    int32_t ecx
    eax_2, ecx = sub_516fb0(edi, arg1)
    
    if (eax_2 == 0xffffffff)
        int32_t var_44_1 = ebx
        sub_4c5680("can't find anim clip: %s")
        *(arg1 + 0x10) = 4
        return arg1
    
    int32_t var_44_2 = ecx
    int32_t var_4c = ecx
    int32_t eax_4
    int80_t st0
    st0, eax_4 = sub_516bc0(esi, edi, eax_2, 1, fconvert.s(fconvert.t(0.100000001f)), 1, 
        fconvert.s(fconvert.t(0.5f)))
    *(arg1 + 0x10) = 4
    return eax_4
}
