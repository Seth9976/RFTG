// 函数名称: sub_5c69f0
// 虚拟地址: 0x5c69f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c69f0(uint32_t arg1)
{
    // 第一条实际指令: uint32_t edx = arg1
    uint32_t edx = arg1
    int32_t result = 0
    int32_t edi = 0x20
    
    if (edx == 0)
        edx = 0x7231
    
    int32_t esi = 0
    uint32_t ecx = edx
    
    if (edx != 0)
        if ((edx & 0xffff0000) != 0)
            ecx = edx u>> 0x10
            esi = 0x10
        
        if ((ecx & 0xff00) != 0)
            ecx u>>= 8
            esi |= 8
        
        if ((ecx.b & 0xf0) != 0)
            ecx u>>= 4
            esi |= 4
        
        if ((ecx.b & 0xc) != 0)
            ecx u>>= 2
            esi |= 2
        
        if ((ecx.b & 2) != 0)
            esi |= 1
    else
        esi = 0xffffffff
    
    if (esi + 1 s<= 0x20)
        int32_t esi_2 = 0
        uint32_t ecx_2 = edx
        
        if (edx != 0)
            if ((edx & 0xffff0000) != 0)
                ecx_2 = edx u>> 0x10
                esi_2 = 0x10
            
            if ((ecx_2 & 0xff00) != 0)
                ecx_2 u>>= 8
                esi_2 |= 8
            
            if ((ecx_2.b & 0xf0) != 0)
                ecx_2 u>>= 4
                esi_2 |= 4
            
            if ((ecx_2.b & 0xc) != 0)
                ecx_2 u>>= 2
                esi_2 |= 2
            
            if ((ecx_2.b & 2) != 0)
                esi_2 |= 1
        else
            esi_2 = 0xffffffff
        
        edi = esi_2 + 1
    
    void* ecx_4 = nullptr
    int32_t esi_3 = 1
    
    if (edi s> 0)
        do
            if ((edx.b & 1) != 0 && *(ecx_4 + 0xbed32c) u> 0)
                result |= esi_3
            
            edx u>>= 1
            ecx_4 += 1
            esi_3 = rol.d(esi_3, 1)
        while (ecx_4 s< edi)
    
    return result
}
