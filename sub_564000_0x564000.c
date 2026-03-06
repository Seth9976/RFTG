// 函数名称: sub_564000
// 虚拟地址: 0x564000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_564000(uint32_t arg1, char* arg2)
{
    // 第一条实际指令: char* esi = arg2
    char* esi = arg2
    uint32_t result
    result.b = *esi
    char* edi = arg1
    int32_t ebx
    ebx.b = *edi
    
    if (ebx.b != 0)
        while (true)
            if (ebx.b == 0x2a)
                if (edi[1] != 0)
                    result = sub_564000(&edi[1], esi)
                
                if (edi[1] == 0 || result.b != 0)
                label_564096:
                    result.b = 1
                    return result
                
                while (true)
                    esi = &esi[1]
                    
                    if (*esi == 0)
                        break
                    
                    if (sub_564000(&edi[1], esi).b != 0)
                        goto label_564096
            else if (result.b != 0)
                if (ebx.b == 0x3f)
                label_564051:
                    ebx.b = edi[1]
                    result.b = esi[1]
                    edi = &edi[1]
                    esi = &esi[1]
                    
                    if (ebx.b == 0)
                        break
                    
                    continue
                else
                    bool cond:1_1
                    
                    if (ebx.b == 0x5c)
                        cond:1_1 = result.b == 0x2f
                    label_564032:
                        
                        if (cond:1_1)
                            goto label_564051
                    else if (ebx.b == 0x2f)
                        cond:1_1 = result.b == 0x5c
                        goto label_564032
                    uint32_t eax_1 = sub_5aa073(sx.d(result.b))
                    
                    if (sub_5aa073(sx.d(ebx.b)) == eax_1)
                        goto label_564051
            
            result.b = 0
            return result
    
    result.b = result.b == 0
    return result
}
