// 函数名称: sub_601b10
// 虚拟地址: 0x601b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_601b10(void* arg1 @ edi)
{
    // 第一条实际指令: if (*(arg1 + 0x20) == 0)
    if (*(arg1 + 0x20) == 0)
        return 
    
    HIMC eax = ImmGetContext(*(arg1 + 0x30))
    
    if (eax == 0)
        return 
    
    ImmNotifyIME(eax, NI_COMPOSITIONSTR, CPS_CANCEL, 0)
    
    if (*(arg1 + 0x1504) != 0)
        ImmSetCompositionStringW(eax, SCS_SETSTR, 0x6b3fac, 2, 0x6b3fac, 2)
    
    ImmNotifyIME(eax, NI_CLOSECANDIDATE, 0, 0)
    ImmReleaseContext(*(arg1 + 0x30), eax)
    sub_5d0fc0(&data_83f3d3, 0, 0)
}
