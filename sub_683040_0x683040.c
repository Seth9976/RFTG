// 函数名称: sub_683040
// 虚拟地址: 0x683040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_683040(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    void* edi = esi[0x73]
    int32_t* result = *(edi + 0x18)
    arg1 = result
    
    if (esi[0x16] != 0)
        esi[0x16] = 2
    
    if (arg2 == 0)
        if (esi[0x16] != 2)
            *(edi + 4) = sub_682a10
        else
            *(edi + 4) = sub_682cf0
        
        *(edi + 8) = sub_4d35a0
        int32_t ebx_1 = esi[0x21]
        
        if (ebx_1 s< 1)
            *(*esi + 0x14) = 0x38
            *(*esi + 0x18) = 1
            result = (**esi)(esi)
        
        if (ebx_1 s> 0x100)
            *(*esi + 0x14) = 0x39
            *(*esi + 0x18) = 0x100
            result = (**esi)(esi)
        
        if (esi[0x16] == 2)
            int32_t ebx_3 = (esi[0x1c] * 3 + 6) * 2
            
            if (*(edi + 0x20) == 0)
                *(edi + 0x20) = (*(esi[1] + 4))(esi, 1, ebx_3)
            
            result = sub_67d220(*(edi + 0x20), ebx_3)
            
            if (*(edi + 0x28) == 0)
                result = sub_682f70(esi)
            
            *(edi + 0x24) = 0
    else
        *(edi + 4) = sub_681c00
        *(edi + 8) = sub_683010
        *(edi + 0x1c) = 1
    
    if (*(edi + 0x1c) != 0)
        for (int32_t i = 0; i s< 0x20; i += 1)
            result = sub_67d220(arg1[i], 0x1000)
        
        *(edi + 0x1c) = 0
    
    return result
}
