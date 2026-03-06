// 函数名称: sub_47a890
// 虚拟地址: 0x47a890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_47a890(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = *arg1
    int32_t* result = *arg1
    
    if (result == 1)
        int32_t ecx_1 = arg1[1]
        int80_t st0_1
        
        if (ecx_1 != 0)
            st0_1, result = sub_47a640(&arg1[0x2225], &arg1[0x221c], ecx_1, &arg1[0x2225])
    else if (result == 2)
        result = arg1[1]
        
        if (result != 0)
            int32_t ecx_4
            int32_t edx
            int80_t st0_2
            st0_2, ecx_4 = sub_47a4f0(&arg1[0x2225], edx, &arg1[0x221c], result, arg1[2])
            result = sub_4eb5a0(ecx_4, *((arg1[2] << 2) + &data_30d72c4))
            
            if (result != 0)
                return sub_4f2850(&data_be4c5c)
    else if (result != 0)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0x7f6, "DrawControllerCursor")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    return result
}
