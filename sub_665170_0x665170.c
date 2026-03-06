// 函数名称: sub_665170
// 虚拟地址: 0x665170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_665170(void* arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    
    if (result != 0)
        void* esi_1 = arg2
        
        if (esi_1 != 0)
            int32_t ebx_1 = arg4
            int128_t* edi_1 = sub_666560(result, (*(esi_1 + 0xd8) + ebx_1) << 4)
            int128_t* var_c_1 = edi_1
            
            if (edi_1 == 0)
                return sub_664100(arg1, "No memory for sPLT palettes")
            
            sub_5ab990(edi_1, *(esi_1 + 0xd4), *(esi_1 + 0xd8) << 4)
            sub_666530(arg1, *(esi_1 + 0xd4))
            result = nullptr
            *(esi_1 + 0xd4) = 0
            void* result_1 = nullptr
            
            if (ebx_1 s> 0)
                void* ebx_3 = arg3 + 0xc
                
                do
                    int32_t* esi_5 = &edi_1[*(esi_1 + 0xd8) + result_1]
                    uint32_t edi_2 = lstrlenA(*(ebx_3 - 0xc)) + 1
                    int128_t* eax_6 = sub_666560(arg1, edi_2)
                    *esi_5 = eax_6
                    
                    if (eax_6 != 0)
                        sub_5ab990(eax_6, *(ebx_3 - 0xc), edi_2)
                        int128_t* eax_9 = sub_666560(arg1, *ebx_3 * 0xa)
                        esi_5[2] = eax_9
                        
                        if (eax_9 != 0)
                            sub_5ab990(eax_9, *(ebx_3 - 4), *ebx_3 * 0xa)
                            esi_5[3] = *ebx_3
                            esi_5[1].b = *(ebx_3 - 8)
                        else
                            sub_664100(arg1, "Out of memory while processing sPLT chunk")
                            sub_666530(arg1, *esi_5)
                            *esi_5 = 0
                    else
                        sub_664100(arg1, "Out of memory while processing sPLT chunk")
                    
                    edi_1 = var_c_1
                    esi_1 = arg2
                    result = result_1 + 1
                    ebx_3 += 0x10
                    result_1 = result
                while (result s< arg4)
                
                ebx_1 = arg4
            
            *(esi_1 + 0xd8) += ebx_1
            *(esi_1 + 8) |= 0x2000
            *(esi_1 + 0xb8) |= 0x20
            *(esi_1 + 0xd4) = edi_1
    
    return result
}
