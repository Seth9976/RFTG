// 函数名称: sub_52ae50
// 虚拟地址: 0x52ae50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_52ae50(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    int32_t eax_3
    char const (** ecx_1)[0x8]
    int32_t edx
    
    switch (*(sub_530500(ecx, edx) + 0x14c0) - 1)
        case 0
            ecx_1 = &data_8c08d8
            eax_3 = 6
        label_52aea7:
            
            if (arg1 s< 0)
                sub_4c5870("propIndex >= 0", &data_83f3d3, "UI2.cpp", 0x11b2, "FieldGetPropDef")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            if (arg1 s< eax_3)
                return &ecx_1[arg1 * 4]
            
            sub_4c5870("propIndex < numDefs", &data_83f3d3, "UI2.cpp", 0x11b3, "FieldGetPropDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 1
            ecx_1 = &data_8c0a08
            eax_3 = 7
            goto label_52aea7
        case 2
            ecx_1 = &data_8c0828
            eax_3 = 0xb
            goto label_52aea7
        case 4
            ecx_1 = &data_8c0938
            eax_3 = 0xd
            goto label_52aea7
        case 5
            ecx_1 = &data_8c0a78
            eax_3 = 4
            goto label_52aea7
    
    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x11a7, "GetPropDefs")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
