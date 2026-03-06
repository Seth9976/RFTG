// 函数名称: sub_5d3180
// 虚拟地址: 0x5d3180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5d3180(void* arg1)
{
    // 第一条实际指令: void* eax = *(arg1 + 0xa0)
    void* eax = *(arg1 + 0xa0)
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t* eax_1 = *(eax + 4)
    uint32_t eax_3 = (*(*eax_1 + 0x10))(eax_1, &var_10, &var_c)
    
    if (eax_3 == 0)
        void* ecx_2 = *(arg1 + 0xa0)
        eax_3 = divu.dp.d(0:var_c, *(ecx_2 + 0xc))
        
        if (eax_3 == *(ecx_2 + 0x10))
            while (true)
                std::tr2::sys::_Close_dir(1)
                int32_t* eax_8 = *(*(arg1 + 0xa0) + 4)
                (*(*eax_8 + 0x24))(eax_8, &var_8)
                eax_3.b = var_8.b
                
                if ((eax_3.b & 2) != 0)
                    int32_t* eax_10 = *(*(arg1 + 0xa0) + 4)
                    (*(*eax_10 + 0x50))(eax_10)
                    int32_t* eax_12 = *(*(arg1 + 0xa0) + 4)
                    (*(*eax_12 + 0x24))(eax_12, &var_8)
                    eax_3.b = var_8.b
                    
                    if ((eax_3.b & 2) != 0)
                        break
                
                int32_t* eax_14 = *(*(arg1 + 0xa0) + 4)
                void* edx_7 = *eax_14
                
                if ((eax_3.b & 1) != 0)
                    int32_t eax_16 = (*(edx_7 + 0x10))(eax_14, &var_10, &var_c)
                    
                    if (eax_16 != 0)
                        return sub_5d2f30(eax_16)
                else
                    eax_3 = (*(edx_7 + 0x30))(eax_14, 0, 0, 1)
                    
                    if (eax_3 != 0)
                        break
                
                void* ecx_7 = *(arg1 + 0xa0)
                uint32_t temp0_2 = divu.dp.d(0:var_c, *(ecx_7 + 0xc))
                
                if (temp0_2 != *(ecx_7 + 0x10))
                    return temp0_2
    else if (eax_3 == 0x88780096)
        int32_t* eax_4 = *(*(arg1 + 0xa0) + 4)
        return (*(*eax_4 + 0x50))(eax_4)
    
    return eax_3
}
