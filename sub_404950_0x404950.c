// 函数名称: sub_404950
// 虚拟地址: 0x404950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_404950(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 8) u< 0xc)
    if (*(arg1 + 8) u< 0xc)
        sub_4c5870("message.dataLen >= sizeof(AsyncGamestateMsgHeader) + sizeof(int)", &data_83f3d3, 
            "..\code\CClient.cpp", 0x724, "ClientGotGamestate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi = *(arg1 + 0xc)
    int32_t ebx = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    eax_1, edx = sub_4045b0(edi)
    int32_t var_c = eax_1
    
    if (edx != 0)
        return sub_5ab990(sub_463bf0(edi, ebx), arg1 + 0x14, *(arg1 + 8) - 4)
    
    int32_t var_20 = edi
    return sub_4c57f0("got gamestate for game not in set (%d)")
}
