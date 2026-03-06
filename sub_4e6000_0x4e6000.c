// 函数名称: sub_4e6000
// 虚拟地址: 0x4e6000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e6000()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* ecx_1 = data_3078804
    
    if (ecx_1 == 0 || (*(*ecx_1 + 0x54))().b == 0)
        return 
    
    sub_4e4fe0()
    int32_t esi_1 = data_30785cc
    
    if (esi_1 == 4)
        sub_4c5870("appType != VRAPP_CARDBOARD", &data_83f3d3, "Renderer.cpp", 0x3e1, 
            "RendererDrawFrame")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ebx
    ebx.b = 0
    
    if (esi_1 != 0)
        int32_t* ecx_2 = data_26a4500
        
        if (ecx_2 != 0)
            char eax_4 = (*(*ecx_2 + 0x10))(&data_26a452c)
            
            if (eax_4 == 0)
                data_26a4568 = 0
            
            ebx.b = eax_4
            
            if (eax_4 != 0)
                sub_507ee0()
    
    sub_4e5fb0()
    
    if (*(data_27e7fd0 + 0x29) == 0)
        sub_4e1c90()
        (*(*data_27e7fd0 + 0x30))()
        
        if (data_30785cc != 0)
            sub_507be0()
        
        sub_4e1f30()
        sub_4e1260()
    
    if (ebx.b != 0)
        esi_1 = sub_508160()
    
    if (esi_1 == 3 || esi_1 == 5 || esi_1 == 0)
        sub_4e5970()
        unimplemented  {call 0x4e5970}
    
    sub_4e1fa0()
    void* eax_7 = data_27e7fcc
    
    if (eax_7 != 0 && ((*(eax_7 + 0x3c) u>> 6).b & 1) != 0)
        int32_t esi_2 = data_27e7fe4
        __builtin_memcpy(esi_2 + 0x60, esi_2, 0x30)
    
    void* eax = sub_4c98a0()
    *(eax + 0x3c) &= 0xfffffeff
}
