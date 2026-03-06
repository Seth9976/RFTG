// 函数名称: sub_4d7330
// 虚拟地址: 0x4d7330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_4d7330(int32_t* arg1 @ edi)
{
    // 第一条实际指令: void* ebx = data_27e7fcc
    void* ebx = data_27e7fcc
    
    if (ebx == 0)
        int32_t eax
        eax.b = 0
        return eax
    
    void* esi = ebx
    
    if (*arg1 != 1)
    label_4d74ee:
        
        if (sub_51e700(arg1) == 0)
            return (*(*data_27e7fd0 + 0x28))(arg1)
    else
        int32_t ecx_1 = arg1[2]
        char var_5_1 = 1
        
        if ((ecx_1.b & 7) != 0)
            var_5_1 = 0
        
        int32_t edx_1 = arg1[1]
        void* eax_1
        
        if (edx_1 == 0xd && ecx_1 == 4)
            eax_1 = data_27e7fd0
        
        if (edx_1 != 0xd || ecx_1 != 4 || *(eax_1 + 0x24) != 0)
            if (edx_1 == 0x71 && var_5_1 != 0)
                int32_t eax_4 = *(esi + 0x3c)
                
                if (((eax_4 u>> 9).b & 1) != 0)
                    *(esi + 0x3c) = eax_4 & 0xfffffdff
                    int32_t eax_6
                    eax_6.b = 1
                    return eax_6
                
                *(esi + 0x3c) = eax_4 | 0x200
                int32_t eax_5
                eax_5.b = 1
                return eax_5
            
            if (edx_1 == 0x73 && ecx_1 == 4)
                PostMessageA(data_30785e0, 0x10, 0, 0)
                BOOL eax_7
                eax_7.b = 1
                return eax_7
            
            if (edx_1 == 0x43)
                if ((ecx_1.b & 0xa) != 0 && (ecx_1.b & 1) != 0)
                    sub_508560()
                    ebx = data_27e7fcc
                else if (edx_1 == 0x43 && (ecx_1.b & 0xa) != 0)
                    sub_508790()
                    ebx = data_27e7fcc
            
            int32_t ecx_5 = arg1[1]
            
            if (ecx_5 == 0x44)
                char eax_8 = (arg1[2]).b
                
                if ((eax_8 & 2) != 0 && (eax_8 & 4) != 0)
                    *(ebx + 0x40) = *(ebx + 0x40) == 0
                    return 1
            
            if (ecx_5 == 0x73 && var_5_1 != 0 && *(ebx + 0x40) != 0)
                int32_t eax_9 = *(esi + 0x3c)
                
                if (((eax_9 u>> 6).b & 1) != 0)
                    *(esi + 0x3c) = eax_9 & 0xffffffbf
                    int32_t eax_11
                    eax_11.b = 1
                    return eax_11
                
                *(esi + 0x3c) = eax_9 | 0x40
                int32_t eax_10
                eax_10.b = 1
                return eax_10
            
            int32_t eax_12
            
            if (ecx_5 == 0x72 && var_5_1 != 0 && *(ebx + 0x40) != 0)
                eax_12 = *(esi + 0x3c)
                
                if (((eax_12 u>> 5).b & 1) != 0)
                    goto label_4d74b5
                
                *(esi + 0x3c) = eax_12 | 0x20
                int32_t eax_13
                eax_13.b = 1
                return eax_13
            
            if (ecx_5 != 0x46 || (arg1[2].b & 0xa) == 0 || *(ebx + 0x40) == 0)
                goto label_4d74ee
            
            eax_12 = *(esi + 0x3c)
            
            if (((eax_12 u>> 5).b & 1) == 0)
                *(esi + 0x3c) = eax_12 | 0x20
                int32_t eax_15
                eax_15.b = 1
                return eax_15
            
        label_4d74b5:
            *(esi + 0x3c) = eax_12 & 0xffffffdf
            int32_t eax_14
            eax_14.b = 1
            return eax_14
        
        ecx_1.b = *(eax_1 + 0x22) == 0
        *(eax_1 + 0x22) = ecx_1.b
        (*(*data_3078804 + 0xb0))()
    
    return 1
}
