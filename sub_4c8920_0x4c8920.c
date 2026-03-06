// 函数名称: sub_4c8920
// 虚拟地址: 0x4c8920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4c8920(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* var_4 = ecx
    int32_t eax = arg1[5]
    
    if (eax != 4)
        if (eax == 1 || eax == 2 || eax == 3)
            sub_4c8240()
        else
            if (eax != 0)
                sub_4c5870("Halt", &data_83f3d3, "Network.cpp", 0x573, "NetworkLocReceive")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx
            sub_4c84e0(arg1, edx, ecx)
    
    int32_t* result = arg1[5]
    
    if (result == 2 || result == 3)
        return sub_4c7b90(arg1)
    
    if (result == 1 || result == 4)
        return sub_4c7de0(arg1)
    
    if (result == 0)
        return result
    
    sub_4c5870("Halt", &data_83f3d3, "Network.cpp", 0x583, "NetworkLocReceive")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
