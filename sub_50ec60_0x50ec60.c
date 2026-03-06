// 函数名称: sub_50ec60
// 虚拟地址: 0x50ec60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_50ec60(int32_t arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t var_c = 0
    int32_t ecx
    int32_t edx
    int32_t* eax = sub_510b30(ecx, edx)
    
    if (*eax == 0)
        return 
    
    char eax_1
    int80_t st0_1
    st0_1, eax_1 = sub_4e3770(&eax[0x10])
    
    if (eax_1 == 0)
        sub_4c5870("QuatIsValid(state.transform.t.r)", &data_83f3d3, "FabDef.cpp", 0x4c6, "FabDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ecx_2 = sub_50f650(eax, arg1, &var_c)
    
    if (eax[0x11f] s<= 0)
        return 
    
    void* var_8_1 = &eax[0x9f]
    
    do
        int32_t* eax_4 = sub_510b30(ecx_2, *var_8_1)
        char eax_5
        int80_t st0_2
        st0_2, eax_5 = sub_4e3770(&eax_4[0x10])
        
        if (eax_5 == 0)
            sub_4c5870("QuatIsValid(addedState.transform.t.r)", &data_83f3d3, "FabDef.cpp", 0x4cb, 
                "FabDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ecx_2 = sub_50f650(eax_4, arg1, &var_c)
        var_8_1 += 4
        i += 1
    while (i s< eax[0x11f])
}
