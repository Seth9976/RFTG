// 函数名称: sub_4f7660
// 虚拟地址: 0x4f7660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4f7660(int32_t* arg1 @ edi, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t esi = *arg2
    int32_t esi = *arg2
    int32_t* eax
    
    if (esi != 0)
        eax = sub_4fc3d0(&data_be1cb8, esi)
        int32_t* ebx_1 = *eax
        int32_t* esi_2
        
        if (ebx_1 == 0)
            esi_2 = arg3[0x28]
        else
            esi_2 = ebx_1
        
        if (esi_2 != eax[1])
            eax = sub_4f7100(*arg2)
            
            if (esi_2 != 0)
                int32_t eax_4
                int80_t st0_2
                st0_2, eax_4 = sub_4f6f00(esi_2)
                void* eax_5 = sub_4fc3d0(&data_be1cb8, eax_4)
                *(eax_5 + 0xc) = arg4
                *(eax_5 + 0x10) = *arg1
                *(eax_5 + 0x14) = arg1[1]
                *arg2 = eax_4
                eax = sub_4fc3d0(&data_be1cb8, eax_4)
                *eax = ebx_1
    else
        eax = arg3
        int32_t* ecx_1 = eax[0x28]
        
        if (ecx_1 != 0)
            int32_t eax_1
            int80_t st0_1
            st0_1, eax_1 = sub_4f6f00(ecx_1)
            void* eax_2 = sub_4fc3d0(&data_be1cb8, eax_1)
            *(eax_2 + 0xc) = arg4
            *(eax_2 + 0x10) = *arg1
            *(eax_2 + 0x14) = arg1[1]
            *arg2 = eax_1
            return eax_2
    
    return eax
}
