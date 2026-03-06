// 函数名称: sub_52ead0
// 虚拟地址: 0x52ead0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_52ead0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    *arg1 = *entry_ebx
    arg1[1] = entry_ebx[1]
    arg1[2] = entry_ebx[2]
    arg1[3] = entry_ebx[3]
    arg1[4] = entry_ebx[4]
    arg1[5] = entry_ebx[5]
    __builtin_memcpy(&arg1[6], &entry_ebx[6], 0x40)
    arg1[0x16] = fconvert.s(fconvert.t(entry_ebx[0x16]))
    arg1[0x17] = entry_ebx[0x17]
    arg1[0x18] = entry_ebx[0x18]
    void* edx_4 = &entry_ebx[0x19]
    void* ecx_4 = &arg1[0x1c]
    void* esi_2 = entry_ebx - arg1
    void* var_c = edx_4
    void* var_8 = ecx_4
    int32_t i_2 = 0xff
    int32_t i
    
    do
        char* eax_1 = *(ecx_4 - 0xc)
        char* const ecx_5 = &data_83f3d3
        
        if (eax_1 != 0)
            ecx_5 = eax_1
        
        char* const edx_5 = *edx_4
        
        if (edx_5 == 0)
            edx_5 = &data_83f3d3
        
        if (ecx_5 != edx_5)
            if (eax_1 != 0 && *eax_1 != 0)
                void* eax_4 = sub_4c4060(var_8 - 0xc)
                int32_t temp1_1 = *(eax_4 + 4)
                *(eax_4 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_4 = *(eax_4 + 0xc) + 0x10
                    sub_4f4430(eax_4, sub_4f4380(esi_4), esi_4)
            
            char* eax_8 = *var_c
            *(var_8 - 0xc) = eax_8
            
            if (eax_8 != 0 && *eax_8 != 0)
                void* eax_11 = sub_4c4060(var_8 - 0xc)
                *(eax_11 + 4) += 1
        
        int32_t* ecx_8 = esi_2
        *(var_8 - 8) = *(var_8 + ecx_8 - 8)
        *(var_8 - 4) = *(ecx_8 + var_8 - 4)
        char* edx_8 = *var_8
        char* const esi_5 = &data_83f3d3
        
        if (edx_8 != 0)
            esi_5 = edx_8
        
        char* const eax_13 = *(ecx_8 + var_8)
        
        if (eax_13 == 0)
            eax_13 = &data_83f3d3
        
        if (esi_5 != eax_13)
            if (edx_8 != 0 && *edx_8 != 0)
                void* eax_15 = sub_4c4060(var_8)
                int32_t temp3_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_7 = *(eax_15 + 0xc) + 0x10
                    sub_4f4430(eax_15, sub_4f4380(esi_7), esi_7)
            
            char* eax_19 = *(esi_2 + var_8)
            *var_8 = eax_19
            
            if (eax_19 != 0 && *eax_19 != 0)
                void* eax_21 = sub_4c4060(var_8)
                *(eax_21 + 4) += 1
        
        *(var_8 + 4) = fconvert.s(fconvert.t(*(var_c + 0x10)))
        *(var_8 + 4) = *(var_c + 0x10)
        *(var_8 + 4) = *(var_c + 0x10)
        edx_4 = var_c + 0x14
        ecx_4 = var_8 + 0x14
        i = i_2
        i_2 -= 1
        var_c = edx_4
        var_8 = ecx_4
    while (i != 1)
    int32_t* result = arg1
    result[0x514] = entry_ebx[0x514]
    result[0x515] = entry_ebx[0x515]
    int32_t eax_23
    eax_23.b = entry_ebx[0x516].b
    result[0x516].b = eax_23.b
    result[0x517] = entry_ebx[0x517]
    sub_52f250(&result[0x518], &entry_ebx[0x518])
    char* ecx_14 = result[0x52f]
    char* const esi_9 = &data_83f3d3
    
    if (ecx_14 != 0)
        esi_9 = ecx_14
    
    char* const edx_11 = entry_ebx[0x52f]
    
    if (edx_11 == 0)
        edx_11 = &data_83f3d3
    
    if (esi_9 != edx_11)
        if (ecx_14 != 0 && *ecx_14 != 0)
            void* eax_26 = sub_4c4060(&result[0x52f])
            int32_t temp4_1 = *(eax_26 + 4)
            *(eax_26 + 4) -= 1
            void* var_14 = eax_26
            
            if (temp4_1 == 1)
                int32_t esi_11 = *(eax_26 + 0xc) + 0x10
                sub_4f4430(eax_26, sub_4f4380(esi_11), esi_11)
                result = arg1
        
        char* ecx_16 = entry_ebx[0x52f]
        result[0x52f] = ecx_16
        
        if (ecx_16 != 0 && *ecx_16 != 0)
            void* eax_30 = sub_4c4060(&result[0x52f])
            *(eax_30 + 4) += 1
    
    result[0x530] = entry_ebx[0x530]
    result[0x531] = entry_ebx[0x531]
    result[0x532] = entry_ebx[0x532]
    result[0x533] = entry_ebx[0x533]
    result[0x534] = entry_ebx[0x534]
    result[0x535] = entry_ebx[0x535]
    result[0x536] = fconvert.s(fconvert.t(entry_ebx[0x536]))
    result[0x537] = entry_ebx[0x537]
    result[0x538] = entry_ebx[0x538]
    result[0x539] = entry_ebx[0x539]
    result[0x53a] = entry_ebx[0x53a]
    result[0x53b] = entry_ebx[0x53b]
    result[0x53c] = entry_ebx[0x53c]
    result[0x53d] = fconvert.s(fconvert.t(entry_ebx[0x53d]))
    result[0x53e].b = entry_ebx[0x53e].b
    result[0x53f] = entry_ebx[0x53f]
    result[0x540] = entry_ebx[0x540]
    result[0x541] = entry_ebx[0x541]
    result[0x542] = entry_ebx[0x542]
    result[0x543] = entry_ebx[0x543]
    result[0x544].b = entry_ebx[0x544].b
    int32_t eax_36
    eax_36.b = *(entry_ebx + 0x1511)
    *(result + 0x1511) = eax_36.b
    result[0x545] = entry_ebx[0x545]
    char* ecx_24 = result[0x546]
    char* const esi_12 = &data_83f3d3
    
    if (ecx_24 != 0)
        esi_12 = ecx_24
    
    char* const edx_19 = entry_ebx[0x546]
    
    if (edx_19 == 0)
        edx_19 = &data_83f3d3
    
    if (esi_12 != edx_19)
        if (ecx_24 != 0 && *ecx_24 != 0)
            void* eax_38 = sub_4c4060(&result[0x546])
            int32_t temp5_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            void* var_14_1 = eax_38
            
            if (temp5_1 == 1)
                int32_t esi_14 = *(eax_38 + 0xc) + 0x10
                sub_4f4430(eax_38, sub_4f4380(esi_14), esi_14)
                result = arg1
        
        char* ecx_26 = entry_ebx[0x546]
        result[0x546] = ecx_26
        
        if (ecx_26 != 0 && *ecx_26 != 0)
            void* eax_42 = sub_4c4060(&result[0x546])
            *(eax_42 + 4) += 1
    
    result[0x547] = entry_ebx[0x547]
    result[0x548] = fconvert.s(fconvert.t(entry_ebx[0x548]))
    result[0x549] = entry_ebx[0x549]
    result[0x54a] = fconvert.s(fconvert.t(entry_ebx[0x54a]))
    char* const esi_15 = &data_83f3d3
    result[0x54b] = fconvert.s(fconvert.t(entry_ebx[0x54b]))
    result[0x54c] = entry_ebx[0x54c]
    result[0x54d] = entry_ebx[0x54d]
    result[0x54e] = entry_ebx[0x54e]
    int32_t ecx_27
    ecx_27.b = entry_ebx[0x54f].b
    result[0x54f].b = ecx_27.b
    *(result + 0x153d) = *(entry_ebx + 0x153d)
    result[0x551] = entry_ebx[0x551]
    result[0x552] = entry_ebx[0x552]
    result[0x553] = entry_ebx[0x553]
    result[0x554] = entry_ebx[0x554]
    result[0x555] = entry_ebx[0x555]
    result[0x556] = entry_ebx[0x556]
    result[0x557] = entry_ebx[0x557]
    char* ecx_30 = result[0x558]
    
    if (ecx_30 != 0)
        esi_15 = ecx_30
    
    char* const edx_25 = entry_ebx[0x558]
    
    if (edx_25 == 0)
        edx_25 = &data_83f3d3
    
    if (esi_15 != edx_25)
        if (ecx_30 != 0 && *ecx_30 != 0)
            void* eax_49 = sub_4c4060(&result[0x558])
            int32_t temp6_1 = *(eax_49 + 4)
            *(eax_49 + 4) -= 1
            void* var_14_2 = eax_49
            
            if (temp6_1 == 1)
                int32_t esi_17 = *(eax_49 + 0xc) + 0x10
                sub_4f4430(eax_49, sub_4f4380(esi_17), esi_17)
                result = arg1
        
        char* ecx_32 = entry_ebx[0x558]
        result[0x558] = ecx_32
        
        if (ecx_32 != 0 && *ecx_32 != 0)
            void* eax_53 = sub_4c4060(&result[0x558])
            *(eax_53 + 4) += 1
    
    result[0x559] = entry_ebx[0x559]
    result[0x55a] = entry_ebx[0x55a]
    result[0x55b] = entry_ebx[0x55b]
    result[0x55c] = entry_ebx[0x55c]
    result[0x55d] = entry_ebx[0x55d]
    int32_t eax_54
    eax_54.b = entry_ebx[0x55e].b
    result[0x55e].b = eax_54.b
    char* ecx_35 = result[0x55f]
    char* const esi_18 = &data_83f3d3
    
    if (ecx_35 != 0)
        esi_18 = ecx_35
    
    char* const edx_28 = entry_ebx[0x55f]
    
    if (edx_28 == 0)
        edx_28 = &data_83f3d3
    
    if (esi_18 != edx_28)
        if (ecx_35 != 0 && *ecx_35 != 0)
            void* eax_56 = sub_4c4060(&result[0x55f])
            int32_t temp7_1 = *(eax_56 + 4)
            *(eax_56 + 4) -= 1
            void* var_14_3 = eax_56
            
            if (temp7_1 == 1)
                int32_t esi_20 = *(eax_56 + 0xc) + 0x10
                sub_4f4430(eax_56, sub_4f4380(esi_20), esi_20)
                result = arg1
        
        ecx_35 = entry_ebx[0x55f]
        result[0x55f] = ecx_35
        
        if (ecx_35 != 0 && *ecx_35 != 0)
            void* eax_60 = sub_4c4060(&result[0x55f])
            *(eax_60 + 4) += 1
    
    ecx_35.b = entry_ebx[0x560].b
    result[0x560].b = ecx_35.b
    *(result + 0x1581) = *(entry_ebx + 0x1581)
    *(result + 0x1585) = *(entry_ebx + 0x1585)
    *(result + 0x1589) = *(entry_ebx + 0x1589)
    result[0x564] = entry_ebx[0x564]
    result[0x565] = entry_ebx[0x565]
    result[0x566] = entry_ebx[0x566]
    result[0x567] = entry_ebx[0x567]
    result[0x568] = entry_ebx[0x568]
    result[0x569] = entry_ebx[0x569]
    result[0x56a] = entry_ebx[0x56a]
    result[0x56b] = entry_ebx[0x56b]
    result[0x56c] = entry_ebx[0x56c]
    result[0x56d] = entry_ebx[0x56d]
    result[0x56e] = entry_ebx[0x56e]
    result[0x56f] = entry_ebx[0x56f]
    result[0x570] = entry_ebx[0x570]
    char* ecx_42 = result[0x571]
    char* const esi_21 = &data_83f3d3
    
    if (ecx_42 != 0)
        esi_21 = ecx_42
    
    char* const edx_35 = entry_ebx[0x571]
    
    if (edx_35 == 0)
        edx_35 = &data_83f3d3
    
    void* eax_66
    
    if (esi_21 != edx_35)
        if (ecx_42 != 0 && *ecx_42 != 0)
            void* eax_67 = sub_4c4060(&result[0x571])
            int32_t temp9_1 = *(eax_67 + 4)
            *(eax_67 + 4) -= 1
            void* var_14_4 = eax_67
            
            if (temp9_1 == 1)
                int32_t esi_23 = *(eax_67 + 0xc) + 0x10
                sub_4f4430(eax_67, sub_4f4380(esi_23), esi_23)
                result = arg1
        
        char* ecx_44 = entry_ebx[0x571]
        result[0x571] = ecx_44
        
        if (ecx_44 != 0 && *ecx_44 != 0)
            eax_66 = sub_4c4060(&result[0x571])
            *(eax_66 + 4) += 1
    
    eax_66.b = entry_ebx[0x572].b
    result[0x572].b = eax_66.b
    result[0x573] = entry_ebx[0x573]
    int32_t* eax_70 = &result[0x574]
    int32_t i_3 = 0x100
    int32_t i_1
    
    do
        *eax_70 = *(eax_70 + esi_2)
        eax_70 = &eax_70[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    result[0x674] = entry_ebx[0x674]
    result[0x675] = entry_ebx[0x675]
    result[0x676] = entry_ebx[0x676]
    return result
}
