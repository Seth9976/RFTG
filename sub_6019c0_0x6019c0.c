// 函数名称: sub_6019c0
// 虚拟地址: 0x6019c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6019c0(void* arg1 @ esi)
{
    // 第一条实际指令: bool cond:0 = *(arg1 + 0x1504) != 0
    bool cond:0 = *(arg1 + 0x1504) != 0
    *(arg1 + 0x14ec) = 0
    *(arg1 + 0x14f0) = 0
    void lpszFileName
    
    if (cond:0 || ImmGetIMEFileNameA(*(arg1 + 0x14e4), &lpszFileName, 0x104) == 0)
        return 
    
    uint32_t param1 = sub_5def10(&lpszFileName)
    
    if (param1 == 0)
        return 
    
    *(arg1 + 0x14ec) = sub_5defa0(param1, "GetReadingString")
    param1 = sub_5defa0(param1, "ShowReadingWindow")
    *(arg1 + 0x14f0) = param1
    
    if (param1 == 0)
        return 
    
    param1 = ImmGetContext(*(arg1 + 0x30))
    
    if (param1 != 0)
        (*(arg1 + 0x14f0))(param1, 0)
        ImmReleaseContext(*(arg1 + 0x30), param1)
}
