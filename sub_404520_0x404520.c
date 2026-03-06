// 函数名称: sub_404520
// 虚拟地址: 0x404520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_404520(void* arg1 @ esi)
{
    // 第一条实际指令: if (*(arg1 + 8) != 0x18)
    if (*(arg1 + 8) != 0x18)
        sub_4c5870("message.dataLen == sizeof(LoginResult)", &data_83f3d3, "..\code\CClient.cpp", 
            0x657, "ClientGotDBID")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi = data_27e7a40
    void* result = data_27e7a54
    int32_t ecx
    
    if (*(edi + 0x19) != 0)
        result, ecx = sub_401100()
        edi = data_27e7a40
    
    if (*(arg1 + 0xc) == 0)
        *(result + 0x10) = *(arg1 + 0x10)
    else
        *(result + 0x14) = *(arg1 + 0x10)
    
    ecx.b = *(arg1 + 0xc)
    *(edi + 0x38) = ecx.b
    void* ecx_1 = arg1 + 0x14
    char* edx_3 = result + 0x40 - ecx_1
    
    do
        result.b = *ecx_1
        *(edx_3 + ecx_1) = result.b
        ecx_1 += 1
    while (result.b != 0)
    
    if (*(edi + 0x19) != result.b)
        return result
    
    return sub_408a40() __tailcall
}
