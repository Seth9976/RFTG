// 函数名称: sub_4b9630
// 虚拟地址: 0x4b9630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b9630(int32_t arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: char* var_4 = arg3
    char* var_4 = arg3
    
    if (arg1 == 0)
        if (arg3[0x44] == 0)
            return 1
        
        *arg3 = 0
        arg3[0x44] = 0
        return 0
    
    if (arg1 == 1)
        sub_4fe1b0(sub_4b9560(arg3, *(arg3 + 0x40)))
        return 0
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\StoreDlg.cpp", 0x176, "StoreItemDialogClick")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
