// 函数名称: sub_510860
// 虚拟地址: 0x510860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_510860(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t edx
    int32_t* eax = sub_510b30(ecx, edx)
    int32_t eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_50c140(*eax)
    void* esi_3 = arg1 * 0xb8 + *eax_1
    int128_t* eax_3 = sub_50c830(arg1, edx_1, eax)
    
    if (*esi_3 != 2)
        sub_4c5870("el.type == FAB_UI", &data_83f3d3, "FabDef.cpp", 0x764, "FabUIState")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*eax_3 != 0)
        sub_4c5870("elState.asset == NULL", &data_83f3d3, "FabDef.cpp", 0x765, "FabUIState")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ebx_1 = eax_3[6].d
    
    if (ebx_1 == 0)
        ebx_1 = *(esi_3 + 0x74)
    
    int32_t esi_4 = *(eax_3 + 4)
    
    if (esi_4 != 0)
        if (*(sub_4fc3d0(&data_be1cb8, esi_4) + 4) != ebx_1)
            sub_4f7100(*(eax_3 + 4))
            int32_t eax_8
            int80_t st0_2
            st0_2, eax_8 = sub_4f6f00(ebx_1)
            *(eax_3 + 4) = eax_8
    else if (ebx_1 != 0)
        int32_t result
        int80_t st0_1
        st0_1, result = sub_4f6f00(ebx_1)
        *(eax_3 + 4) = result
        return result
    
    return *(eax_3 + 4)
}
