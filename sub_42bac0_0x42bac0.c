// 函数名称: sub_42bac0
// 虚拟地址: 0x42bac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_42bac0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi = *(eax_1 + 0x45844)
    void* entry_ebx
    int32_t eax_3 = *(entry_ebx + 0x90)
    int32_t edx = sx.d(*(esi + eax_3 * 0x14 + 0x464))
    *arg2 = sub_4a0d70(eax_3, edx, esi, eax_3, 0xffffffff, 1)
    int32_t eax_5 = *(entry_ebx + 0x8c)
    int32_t edi = sx.d(*(esi + eax_5 * 0x14 + 0x466))
    *arg1 = sub_4a0d70(eax_5, edi, esi, *(entry_ebx + 0x90), eax_5, 0)
    int32_t eax_9 = sub_46b660(*(data_27e7a40 + 0x74))
    int32_t ecx_5 = *(data_27e7a40 + 0x74)
    
    if (edi == ecx_5)
        *arg1 += eax_9
        int32_t eax_10
        eax_10.b = *arg1 s>= *arg2
        return eax_10
    
    if (edx == ecx_5)
        *arg2 += eax_9
    
    int32_t eax_11
    eax_11.b = *arg1 s>= *arg2
    return eax_11
}
