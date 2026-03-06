// 函数名称: sub_502c80
// 虚拟地址: 0x502c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_502c80(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_4 = arg3
    int32_t var_4 = arg3
    
    if (*(arg1 + 0xc) s<= 0)
        return 
    
    void** eax = *(arg1 + 8)
    
    if (eax == 0)
        sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x5a, 
            "XList<struct DefParseItem *>::GetTail")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    arg1 = *eax
    *(arg1 + 0x10) = (arg3 u>> 9).b & 1
    *(arg1 + 0x11) = (arg3 u>> 0xa).b & 1
}
