// 函数名称: sub_598220
// 虚拟地址: 0x598220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_598220(int32_t* arg1 @ edi)
{
    // 第一条实际指令: arg1[0xda1].b = 0xff
    arg1[0xda1].b = 0xff
    
    if (sub_596d80(arg1) != 0xd8)
        data_273ac1c = "no SOI"
        return 0
    
    int32_t entry_result
    
    if (entry_result == 1)
        return entry_result
    
    uint32_t i = zx.d(sub_596d80(arg1))
    
    if (i != 0xc0)
        while (i != 0xc1)
            if (sub_5972f0(i, arg1) == 0)
            label_5982f1:
                return 0
            
            int32_t eax_5 = sub_596d80(arg1)
            
            for (i = zx.d(eax_5.b); i == 0xff; i = zx.d(eax_5.b))
                void* esi_1 = *arg1
                
                if (*(esi_1 + 0x10) != 0)
                    eax_5 = (*(esi_1 + 0x18))(*(esi_1 + 0x1c))
                    
                    if (eax_5 != 0 && (*(esi_1 + 0x20) == 0
                            || sbb.d(eax_5, eax_5, *(esi_1 + 0xa8) u< *(esi_1 + 0xac)) != 0xffffffff))
                        data_273ac1c = "no SOF"
                        goto label_5982f1
                else if (sbb.d(eax_5, eax_5, *(esi_1 + 0xa8) u< *(esi_1 + 0xac)) != 0xffffffff)
                    data_273ac1c = "no SOF"
                    goto label_5982f1
                
                eax_5 = sub_596d80(arg1)
            
            if (i == 0xc0)
                break
    
    int32_t eax_9 = sub_597cb0(arg1, entry_result)
    int32_t eax_10 = neg.d(eax_9)
    return neg.d(sbb.d(eax_10, eax_10, eax_9 != 0))
}
