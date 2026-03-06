// 函数名称: sub_4044a0
// 虚拟地址: 0x4044a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4044a0(void* arg1 @ edi)
{
    // 第一条实际指令: if (*(arg1 + 8) != 8)
    if (*(arg1 + 8) != 8)
        sub_4c5870("message.dataLen == sizeof(TimeLeftMessage)", &data_83f3d3, "..\code\CClient.cpp", 
            0x648, "ClientGotTimeUsed")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = data_27e7a40
    
    if (*(esi + 0x38) == 0)
        *(data_27e7a54 + 0x10)
    else
        *(data_27e7a54 + 0x14)
    
    void* result = sub_404430(*(arg1 + 0xc))
    
    if (result != 0)
        *(result + 0x3c) = *(arg1 + 0x10)
        int32_t edx_1 = *(esi + 0xc)
        *(result + 0x40) = *(esi + 8)
        *(result + 0x44) = edx_1
    
    return result
}
