// 函数名称: sub_59dc70
// 虚拟地址: 0x59dc70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_59dc70(void* arg1 @ esi, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_8_1 = 0x80
    
    for (char* i = nullptr; i s< 4; i = &i[1])
        if ((var_8_1 & arg2) != 0)
            if (*(arg1 + 0x10) == 0)
            label_59dcac:
                int32_t eax_3 = *(arg1 + 0xa8)
                
                if (sbb.d(eax_3, eax_3, eax_3 u< *(arg1 + 0xac)) != 0xffffffff)
                    data_273ac1c = "bad file"
                    return 0
            else
                int32_t eax_2
                eax_2, ecx = (*(arg1 + 0x18))(*(arg1 + 0x1c))
                
                if (eax_2 != 0)
                    if (*(arg1 + 0x20) != 0)
                        goto label_59dcac
                    
                    data_273ac1c = "bad file"
                    return 0
            
            char* eax_6 = *(arg1 + 0xa8)
            char eax_8
            
            if (eax_6 u< *(arg1 + 0xac))
                ecx.b = *eax_6
                *(arg1 + 0xa8) = &eax_6[1]
                eax_8 = ecx.b
            else if (*(arg1 + 0x20) == 0)
                eax_8 = 0
            else
                int32_t eax_10 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                
                if (eax_10 != 0)
                    *(arg1 + 0xa8) = arg1 + 0x28
                    *(arg1 + 0xac) = arg1 + 0x28 + eax_10
                else
                    *(arg1 + 0x20) = eax_10
                    char* eax_12 = *(arg1 + 0xac) - 1
                    *(arg1 + 0xa8) = eax_12
                    *eax_12 = 0
                
                char* eax_13 = *(arg1 + 0xa8)
                char ecx_3 = *eax_13
                *(arg1 + 0xa8) = &eax_13[1]
                eax_8 = ecx_3
            
            i[arg3] = eax_8
        
        var_8_1 s>>= 1
    
    return arg3
}
