// 函数名称: sub_478390
// 虚拟地址: 0x478390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_478390()
{
    // 第一条实际指令: char const* const var_14 = "idle_turn_01"
    char const* const var_14 = "idle_turn_01"
    char const* const var_10 = "idle_turn_02"
    char const* const var_c = "idle_turn_03"
    uint32_t temp1 = modu.dp.d(0:(sub_4c95c0()), 3)
    void* entry_ebx
    void* esi = *(entry_ebx + 0x1c)
    int32_t* edi = *(esi + 4)
    char* edx_2 = (&var_14)[temp1]
    char* var_20 = edx_2
    int32_t eax_2
    int32_t ecx
    eax_2, ecx = sub_516fb0(edi, edx_2)
    
    if (eax_2 == 0xffffffff)
        char* var_20_1 = edx_2
        int32_t eax_3 = sub_4c5680("can't find anim clip: %s")
        *(entry_ebx + 0x10) = 5
        return eax_3
    
    int32_t var_20_2 = ecx
    int32_t var_28 = ecx
    int32_t eax_4
    int80_t st0
    st0, eax_4 = sub_516bc0(esi, edi, eax_2, 1, fconvert.s(fconvert.t(0.100000001f)), 1, 
        fconvert.s(fconvert.t(0.5f)))
    *(entry_ebx + 0x10) = 5
    return eax_4
}
