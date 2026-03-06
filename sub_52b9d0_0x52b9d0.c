// 函数名称: sub_52b9d0
// 虚拟地址: 0x52b9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_52b9d0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edx = data_be1ef4
    
    if (edx == arg1)
        void* result = sub_530500(ecx, edx)
        
        if (*(result + 0x14c0) == 3 && *(result + 0x1580) != 0)
            *(result + 0x14b1) = 0
        
        data_be1ef4 = 0
        return result
    
    sub_4c5870("gUI2.focus == handle", &data_83f3d3, "UI2.cpp", 0x134f, "UI2ClearFocus")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
