// 函数名称: sub_53f560
// 虚拟地址: 0x53f560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_53f560(char* arg1 @ esi)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_14 = ebx
    char const* const var_10 = "Left"
    char const* const var_c = "Center"
    char const* const var_8 = "Right"
    int32_t result = 0
    
    while (true)
        char* ecx_1 = (&var_10)[result]
        char* edx_1 = arg1
        int32_t ecx_3
        
        while (true)
            ebx.b = *ecx_1
            char temp0_1 = *edx_1
            bool c_1 = ebx.b u< temp0_1
            
            if (ebx.b == temp0_1)
                if (ebx.b == 0)
                    ecx_3 = 0
                    break
                
                ebx.b = ecx_1[1]
                char temp3_1 = edx_1[1]
                c_1 = ebx.b u< temp3_1
                
                if (ebx.b == temp3_1)
                    ecx_1 = &ecx_1[2]
                    edx_1 = &edx_1[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    ecx_3 = 0
                    break
            
            bool c_2 = unimplemented  {sbb ecx, ecx}
            ecx_3 = sbb.d(sbb.d(ecx_1, ecx_1, c_1), 0xffffffff, c_2)
            break
        
        if (ecx_3 == 0)
            return result
        
        result += 1
        
        if (result s>= 3)
            break
    
    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0xf50, "ToHAlign")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
