// 函数名称: sub_67d6b0
// 虚拟地址: 0x67d6b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67d6b0(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1a8)
    void* esi = *(arg1 + 0x1a8)
    
    if (*(esi + 0x30) != 0)
        goto label_67d6ee
    
    int32_t result = (*(*(arg1 + 0x1ac) + 0xc))(arg1, *(esi + (*(esi + 0x40) << 2) + 0x38))
    
    if (result != 0)
        *(esi + 0x4c) += 1
        *(esi + 0x30) = 1
    label_67d6ee:
        int32_t eax_3 = *(esi + 0x44)
        
        if (eax_3 == 0)
        label_67d74c:
            int32_t eax_9 = *(esi + 0x4c)
            *(esi + 0x34) = 0
            *(esi + 0x48) = *(arg1 + 0x13c) - 1
            
            if (eax_9 == *(arg1 + 0x140))
                sub_67d580(arg1)
            
            *(esi + 0x44) = 1
            goto label_67d79e
        
        if (eax_3 == 1)
        label_67d79e:
            result = (*(*(arg1 + 0x1b0) + 4))(arg1, *(esi + (*(esi + 0x40) << 2) + 0x38), esi + 0x34, 
                *(esi + 0x48), arg2, arg3, arg4)
            
            if (*(esi + 0x34) u>= *(esi + 0x48))
                if (*(esi + 0x4c) == 1)
                    sub_67d4a0(arg1)
                
                *(esi + 0x40) ^= 1
                *(esi + 0x30) = 0
                result = *(arg1 + 0x13c) + 1
                *(esi + 0x34) = result
                *(esi + 0x48) = *(arg1 + 0x13c) + 2
                *(esi + 0x44) = 2
        else
            result = eax_3 - 2
            
            if (eax_3 == 2)
                result = (*(*(arg1 + 0x1b0) + 4))(arg1, *(esi + (*(esi + 0x40) << 2) + 0x38), 
                    esi + 0x34, *(esi + 0x48), arg2, arg3, arg4)
                
                if (*(esi + 0x34) u>= *(esi + 0x48))
                    result = arg4
                    *(esi + 0x44) = 0
                    
                    if (*arg3 u< result)
                        goto label_67d74c
    
    return result
}
