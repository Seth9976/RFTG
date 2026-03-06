// 函数名称: sub_5cc890
// 虚拟地址: 0x5cc890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cc890(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: BOOL edi = 0
    BOOL edi = 0
    HDC hdc = CreateDCW(*(sub_5c9500(arg1) + 0x40), nullptr, nullptr, nullptr)
    
    if (hdc != 0)
        edi = SetDeviceGammaRamp(hdc, arg2)
        
        if (edi == 0)
            sub_5dc5a0("SetDeviceGammaRamp()")
        
        hdc = DeleteDC(hdc)
    
    return neg.d(sbb.d(hdc, hdc, edi != 0)) - 1
}
