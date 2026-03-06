// 函数名称: sub_403ff0
// 虚拟地址: 0x403ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_403ff0(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 8) != 0x3c)
    if (*(arg1 + 8) != 0x3c)
        sub_4c5870("message.dataLen == msgSize", &data_83f3d3, "..\code\CClient.cpp", 0x5c0, 
            "ClientGotFriendDesc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result = data_27e7a40
    int32_t edi = *(result + 0x3188e4)
    int32_t ecx = 0
    
    if (edi s> 0)
        void* edx_1 = result + 0x317ad4
        
        do
            if (*edx_1 == *(arg1 + 0xc))
                __builtin_memcpy(result + ecx * 0x3c + 0x317ad4, arg1 + 0xc, 0x3c)
                return result
            
            ecx += 1
            edx_1 += 0x3c
        while (ecx s< edi)
    
    if (edi s< 0x3c)
        __builtin_memcpy(result + edi * 0x3c + 0x317ad4, arg1 + 0xc, 0x3c)
        *(result + 0x3188e4) += 1
    
    return result
}
