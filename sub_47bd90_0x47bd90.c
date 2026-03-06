// 函数名称: sub_47bd90
// 虚拟地址: 0x47bd90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_47bd90(int32_t* arg1, void* arg2 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    int32_t eax = *arg1
    
    if (eax == 0)
        int32_t var_10_2 = 8
        return sub_47b9c0(arg1, arg2, ecx, 0x8741c4)
    
    if (eax == 1)
        int32_t var_10_1 = 0x15
        return sub_47b9c0(arg1, arg2, ecx, 0x8741e8)
    
    if (eax == 2)
        int32_t var_10 = 6
        return sub_47b9c0(arg1, arg2 + 0x54, sub_47bbd0(ecx, arg2, arg1[2]), 0x874258) + 7
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0xac1, "ControllerGetClickState")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
