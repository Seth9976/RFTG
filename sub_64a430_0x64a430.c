// 函数名称: sub_64a430
// 虚拟地址: 0x64a430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64a430(void* arg1)
{
    // 第一条实际指令: void* ecx = *(arg1 + 4)
    void* ecx = *(arg1 + 4)
    void* edi = *(arg1 + 0x68)
    
    if (edi != 0 && ecx != 0)
        void* edx_1 = *(ecx + 0x1c)
        
        if (edx_1 != 0)
            char esi = (*(edx_1 + 0xe48)).b
            int32_t edx_3 = *(edx_1 + 4) s>> (esi + 1)
            *(arg1 + 0x20) = 0
            *(arg1 + 0x30) = edx_3
            *(arg1 + 0x18) = 0xffffffff
            *(arg1 + 0x38) = 0xffffffff
            *(arg1 + 0x14) = edx_3 s>> esi
            *(arg1 + 0x3c) = 0xffffffff
            *(arg1 + 0x40) = 0xffffffff
            *(arg1 + 0x44) = 0xffffffff
            *(edi + 0x80) = 0xffffffff
            *(edi + 0x84) = 0xffffffff
            return 0
    
    return 0xffffffff
}
