// 函数名称: sub_6021b0
// 虚拟地址: 0x6021b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6021b0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t var_c = 0
    int32_t var_c = 0
    int32_t result = 0
    int32_t* var_8 = nullptr
    
    if (CoCreateInstance(&data_8361a0, 0, CLSCTX_INPROC_SERVER, &data_835c00, arg1 + 0x1508) s>= 0)
        int32_t* eax_2 = *(arg1 + 0x1508)
        
        if ((*(*eax_2 + 0x38))(eax_2, &var_c, 4) s>= 0)
            int32_t var_18_1 = 0xc
            int32_t var_1c_2 = 0xc
            *(arg1 + 0x151c) = sub_5d0ac0()
            int32_t eax_6 = sub_5d0ac0()
            void*** ecx_2 = *(arg1 + 0x151c)
            *(arg1 + 0x1520) = eax_6
            *ecx_2 = &data_8bad7c
            *(*(arg1 + 0x151c) + 4) = 1
            *(*(arg1 + 0x151c) + 8) = arg1
            **(arg1 + 0x1520) = &data_8bad94
            *(*(arg1 + 0x1520) + 4) = 1
            *(*(arg1 + 0x1520) + 8) = arg1
            int32_t* edi_1 = *(arg1 + 0x1508)
            
            if ((**edi_1)(edi_1, 0x8360a0, &var_8) s>= 0)
                int32_t* eax_9 = var_8
                
                if ((*(*eax_9 + 0xc))(eax_9, 0x8360e0, *(arg1 + 0x151c), arg1 + 0x150c) s>= 0)
                    int32_t* eax_12 = var_8
                    
                    if ((*(*eax_12 + 0xc))(eax_12, 0x835fa0, *(arg1 + 0x1520), arg1 + 0x1510) s>= 0)
                        result = 1
                
                int32_t* eax_15 = var_8
                (*(*eax_15 + 8))(eax_15)
            
            return result
    
    return 0
}
