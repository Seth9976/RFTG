// 函数名称: sub_4c8890
// 虚拟地址: 0x4c8890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c8890(void* arg1)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x10)
    int32_t ecx = *(arg1 + 0x10)
    
    if (ecx == 0)
        return 
    
    void* edx_1 = data_27e7bb8
    uint32_t eax = zx.d(ecx.w)
    
    if (eax u>= *(edx_1 + 4))
        return 
    
    uint32_t ebx_1 = eax * 0x4c + *edx_1
    
    if (*(ebx_1 + 0x48) != ecx || *(arg1 + 0x44) == 0)
        return 
    
    do
        if (*(arg1 + 0x3c) == 0)
            sub_4c5870("mpHead != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x53, 
                "XList<struct NetBuffer *>::GetHead")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* var_8 = sub_4db440(arg1 + 0x3c)
        sub_518190(ebx_1 + 0x30, &var_8)
    while (*(arg1 + 0x44) != 0)
}
