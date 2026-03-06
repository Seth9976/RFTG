// 函数名称: sub_4bacb0
// 虚拟地址: 0x4bacb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4bacb0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    int32_t edx = data_27e7aa4
    *(edx + (eax << 2) + 0x4ec) += 1
    int32_t ecx_1 = *arg1
    
    if (ecx_1 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x8e, "MaxFilter")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    int32_t ecx_2
    
    switch (ecx_1)
        case 0, 1, 2
            ecx_2 = 5
        case 3
            ecx_2 = 2
    
    if (*(edx + (eax << 2) + 0x4ec) s>= ecx_2)
        *(edx + (eax << 2) + 0x4ec) = 0
    
    return 0
}
