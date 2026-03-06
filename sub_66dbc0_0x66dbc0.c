// 函数名称: sub_66dbc0
// 虚拟地址: 0x66dbc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_66dbc0(uint32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    char eax = edi[2].b
    int32_t i_2 = *edi
    
    if ((eax & 4) != 0)
        char ecx = *(edi + 9)
        void* result
        
        if (ecx == 8)
            int32_t edi_1 = *(arg3 + 0x188)
            
            if (edi_1 != 0)
                int32_t eax_1
                eax_1.b = (eax & 2) != 0
                result = arg2 + eax_1 * 2 + 2 - 1
                
                if (i_2 == 0)
                    return result
                
                int32_t i
                
                do
                    uint32_t ecx_2
                    ecx_2.b = *(zx.d(*result) + edi_1)
                    *result = ecx_2.b
                    result += eax_1 * 2 + 2
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                return result
        else if (ecx == 0x10)
            int32_t edi_2 = *(arg3 + 0x190)
            
            if (edi_2 != 0)
                int32_t eax_2
                eax_2.b = (eax & 2) != 0
                result = arg2 + (eax_2 << 2) + 4 - 2
                
                if (i_2 == 0)
                    return result
                
                arg1 = zx.d((*(arg3 + 0x174)).b)
                int32_t i_1
                
                do
                    uint32_t ecx_4
                    ecx_4.b = arg1.b
                    ecx_4 = zx.d(
                        *(*(edi_2 + (zx.d(*(result + 1)) u>> ecx_4.b << 2)) + (zx.d(*result) << 1)))
                    *result = (ecx_4 u>> 8).b
                    *(result + 1) = ecx_4.b
                    result += (eax_2 << 2) + 4
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                return result
    
    return sub_664100(arg3, "png_do_encode_alpha: unexpected call")
}
