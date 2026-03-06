// 函数名称: sub_582a10
// 虚拟地址: 0x582a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_582a10(HWND arg1, uint32_t arg2, WPARAM arg3, LRESULT arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    HANDLE eax_2
    int32_t edx
    eax_2, edx = GetPropA(GetParent(arg1), "lpInsData")
    data_26a6554 = eax_2
    
    if (arg2 u> 0x100)
        if (arg2 - 0x111 u> 0xf6)
            return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
        
        switch (arg2)
            case 0x111
                if (0x7d4 == arg3.w)
                    sub_580320(arg1, arg4)
                
                return 0
            case 0x112, 0x113, 0x114, 0x115, 0x116, 0x117, 0x118, 0x119, 0x11a, 0x11b, 0x11c, 0x11d, 
                    0x11e, 0x11f, 0x120, 0x121, 0x122, 0x123, 0x124, 0x125, 0x126, 0x127, 0x128, 0x129, 
                    0x12a, 0x12b, 0x12c, 0x12d, 0x12e, 0x12f, 0x130, 0x131, 0x132, 0x133, 0x134, 0x135, 
                    0x136, 0x137, 0x138, 0x139, 0x13a, 0x13b, 0x13c, 0x13d, 0x13e, 0x13f, 0x140, 0x141, 
                    0x142, 0x143, 0x144, 0x145, 0x146, 0x147, 0x148, 0x149, 0x14a, 0x14b, 0x14c, 0x14d, 
                    0x14e, 0x14f, 0x150, 0x151, 0x152, 0x153, 0x154, 0x155, 0x156, 0x157, 0x158, 0x159, 
                    0x15a, 0x15b, 0x15c, 0x15d, 0x15e, 0x15f, 0x160, 0x161, 0x162, 0x163, 0x164, 0x165, 
                    0x166, 0x167, 0x168, 0x169, 0x16a, 0x16b, 0x16c, 0x16d, 0x16e, 0x16f, 0x170, 0x171, 
                    0x172, 0x173, 0x174, 0x175, 0x176, 0x177, 0x178, 0x179, 0x17a, 0x17b, 0x17c, 0x17d, 
                    0x17e, 0x17f, 0x180, 0x181, 0x182, 0x183, 0x184, 0x185, 0x186, 0x187, 0x188, 0x189, 
                    0x18a, 0x18b, 0x18c, 0x18d, 0x18e, 0x18f, 0x190, 0x191, 0x192, 0x193, 0x194, 0x195, 
                    0x196, 0x197, 0x198, 0x199, 0x19a, 0x19b, 0x19c, 0x19d, 0x19e, 0x19f, 0x1a0, 0x1a1, 
                    0x1a2, 0x1a3, 0x1a4, 0x1a5, 0x1a6, 0x1a7, 0x1a8, 0x1a9, 0x1aa, 0x1ab, 0x1ac, 0x1ad, 
                    0x1ae, 0x1af, 0x1b0, 0x1b1, 0x1b2, 0x1b3, 0x1b4, 0x1b5, 0x1b6, 0x1b7, 0x1b8, 0x1b9, 
                    0x1ba, 0x1bb, 0x1bc, 0x1bd, 0x1be, 0x1bf, 0x1c0, 0x1c1, 0x1c2, 0x1c3, 0x1c4, 0x1c5, 
                    0x1c6, 0x1c7, 0x1c8, 0x1c9, 0x1ca, 0x1cb, 0x1cc, 0x1cd, 0x1ce, 0x1cf, 0x1d0, 0x1d1, 
                    0x1d2, 0x1d3, 0x1d4, 0x1d5, 0x1d6, 0x1d7, 0x1d8, 0x1d9, 0x1da, 0x1db, 0x1dc, 0x1dd, 
                    0x1de, 0x1df, 0x1e0, 0x1e1, 0x1e2, 0x1e3, 0x1e4, 0x1e5, 0x1e6, 0x1e7, 0x1e8, 0x1e9, 
                    0x1ea, 0x1eb, 0x1ec, 0x1ed, 0x1ee, 0x1ef, 0x1f0, 0x1f1, 0x1f2, 0x1f3, 0x1f4, 0x1f5, 
                    0x1f6, 0x1f7, 0x1f8, 0x1f9, 0x1fa, 0x1fb, 0x1fc, 0x1fd, 0x1fe, 0x1ff, 0x204, 0x205, 
                    0x206
                return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
            case 0x200
                uint32_t eax_20 = arg4 u>> 0x10
                sub_57f540(eax_20, arg1, sx.d(arg4.w), eax_20.w)
                return 0
            case 0x201
                uint32_t eax_13 = arg4 u>> 0x10
                sub_57efd0(eax_13, edx, sx.d(arg4.w), arg1, 0, eax_13.w)
                return 0
            case 0x202
                int32_t edx_6 = sx.d((arg4 u>> 0x10).w)
                int32_t var_1c_6 = edx_6
                sub_57f2f0(sx.d(arg4.w), arg1, edx_6.w)
                return 0
            case 0x203
                uint32_t edx_5 = arg4 u>> 0x10
                int32_t eax_15 = sx.d(edx_5.w)
                sub_57efd0(eax_15, edx_5, sx.d(arg4.w), arg1, 1, eax_15.w)
                return 0
            case 0x207
            label_582bf3:
                *(eax_2 + 0x38) = 1
                
                if (*(data_26a6554 + 4) != 0)
                    sub_57ecf0()
                
                *(data_26a6554 + 0x3c) = 1
                return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
    else
        if (arg2 == 0x100)
            sub_57fef0(arg1, arg4.w, (arg4 u>> 0x10).w)
            return 0
        
        if (arg2 - 2 u> 0x9f)
            return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
        
        switch (arg2 + &jump_table_582c3c[6]:2)
            case &lookup_table_582c58
                SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
                RemovePropA(arg1, "Wprc")
                return 0
            case &lookup_table_582c58[1], &lookup_table_582c58[2], &lookup_table_582c58[3], 
                    &lookup_table_582c58[4], &lookup_table_582c58[7], &lookup_table_582c58[8], 
                    &lookup_table_582c58[9], &lookup_table_582c58[0xa], &lookup_table_582c58[0xb], 
                    &lookup_table_582c58[0xc], &lookup_table_582c58[0xd], &lookup_table_582c58[0xe], 
                    &lookup_table_582c58[0xf], &lookup_table_582c58[0x10], &lookup_table_582c58[0x11], 
                    &lookup_table_582c58[0x12], &lookup_table_582c58[0x13], &lookup_table_582c58[0x14], 
                    &lookup_table_582c58[0x15], &lookup_table_582c58[0x16], &lookup_table_582c58[0x17], 
                    &lookup_table_582c58[0x18], &lookup_table_582c58[0x19], &lookup_table_582c58[0x1a], 
                    &lookup_table_582c58[0x1b], &lookup_table_582c58[0x1c], &lookup_table_582c58[0x1d], 
                    &lookup_table_582c58[0x1f], &lookup_table_582c58[0x20], &lookup_table_582c58[0x21], 
                    &lookup_table_582c58[0x22], &lookup_table_582c58[0x23], &lookup_table_582c58[0x24], 
                    &lookup_table_582c58[0x25], &lookup_table_582c58[0x26], &lookup_table_582c58[0x27], 
                    &lookup_table_582c58[0x28], &lookup_table_582c58[0x29], &lookup_table_582c58[0x2a], 
                    &lookup_table_582c58[0x2b], &lookup_table_582c58[0x2c], &lookup_table_582c58[0x2d], 
                    &lookup_table_582c58[0x2e], &lookup_table_582c58[0x2f], &lookup_table_582c58[0x30], 
                    &lookup_table_582c58[0x31], &lookup_table_582c58[0x32], &lookup_table_582c58[0x33], 
                    &lookup_table_582c58[0x34], &lookup_table_582c58[0x35], &lookup_table_582c58[0x36], 
                    &lookup_table_582c58[0x37], &lookup_table_582c58[0x38], &lookup_table_582c58[0x39], 
                    &lookup_table_582c58[0x3a], &lookup_table_582c58[0x3b], &lookup_table_582c58[0x3c], 
                    &lookup_table_582c58[0x3d], &lookup_table_582c58[0x3e], &lookup_table_582c58[0x3f], 
                    &lookup_table_582c58[0x40], &lookup_table_582c58[0x41], &lookup_table_582c58[0x42], 
                    &lookup_table_582c58[0x43], &lookup_table_582c58[0x44], &lookup_table_582c58[0x45], 
                    &lookup_table_582c58[0x46], &lookup_table_582c58[0x47], &lookup_table_582c58[0x48], 
                    &lookup_table_582c58[0x49], &lookup_table_582c58[0x4a], &lookup_table_582c58[0x4b], 
                    &lookup_table_582c58[0x4c], &lookup_table_582c58[0x4d], &lookup_table_582c58[0x4e], 
                    &lookup_table_582c58[0x4f], &lookup_table_582c58[0x50], &lookup_table_582c58[0x51], 
                    &lookup_table_582c58[0x52], &lookup_table_582c58[0x53], &lookup_table_582c58[0x54], 
                    &lookup_table_582c58[0x55], &lookup_table_582c58[0x56], &lookup_table_582c58[0x57], 
                    &lookup_table_582c58[0x58], &lookup_table_582c58[0x59], &lookup_table_582c58[0x5a], 
                    &lookup_table_582c58[0x5b], &lookup_table_582c58[0x5c], &lookup_table_582c58[0x5d], 
                    &lookup_table_582c58[0x5e], &lookup_table_582c58[0x5f], &lookup_table_582c58[0x60], 
                    &lookup_table_582c58[0x61], &lookup_table_582c58[0x62], &lookup_table_582c58[0x63], 
                    &lookup_table_582c58[0x64], &lookup_table_582c58[0x65], &lookup_table_582c58[0x66], 
                    &lookup_table_582c58[0x67], &lookup_table_582c58[0x68], &lookup_table_582c58[0x69], 
                    &lookup_table_582c58[0x6a], &lookup_table_582c58[0x6b], &lookup_table_582c58[0x6c], 
                    &lookup_table_582c58[0x6d], &lookup_table_582c58[0x6e], &lookup_table_582c58[0x6f], 
                    &lookup_table_582c58[0x70], &lookup_table_582c58[0x71], &lookup_table_582c58[0x72], 
                    &lookup_table_582c58[0x73], &lookup_table_582c58[0x74], &lookup_table_582c58[0x75], 
                    &lookup_table_582c58[0x76], &lookup_table_582c58[0x77], &lookup_table_582c58[0x78], 
                    &lookup_table_582c58[0x79], &lookup_table_582c58[0x7a], &lookup_table_582c58[0x7b], 
                    &lookup_table_582c58[0x7c], &lookup_table_582c58[0x7d], &lookup_table_582c58[0x7e], 
                    &lookup_table_582c58[0x7f], &lookup_table_582c58[0x80], &lookup_table_582c58[0x81], 
                    &lookup_table_582c58[0x82], &lookup_table_582c58[0x83], &lookup_table_582c58[0x84], 
                    &lookup_table_582c58[0x86], &lookup_table_582c58[0x87], &lookup_table_582c58[0x88], 
                    &lookup_table_582c58[0x89], &lookup_table_582c58[0x8a], &lookup_table_582c58[0x8b], 
                    &lookup_table_582c58[0x8c], &lookup_table_582c58[0x8d], &lookup_table_582c58[0x8e], 
                    &lookup_table_582c58[0x8f], &lookup_table_582c58[0x90], &lookup_table_582c58[0x91], 
                    &lookup_table_582c58[0x92], &lookup_table_582c58[0x93], &lookup_table_582c58[0x94], 
                    &lookup_table_582c58[0x95], &lookup_table_582c58[0x96], &lookup_table_582c58[0x97], 
                    &lookup_table_582c58[0x98], &lookup_table_582c58[0x99], &lookup_table_582c58[0x9a], 
                    &lookup_table_582c58[0x9b], &lookup_table_582c58[0x9c], &lookup_table_582c58[0x9d], 
                    &lookup_table_582c58[0x9e]
                return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
            case &lookup_table_582c58[5]
                *(eax_2 + 0x38) = 1
                RedrawWindow(*(data_26a6554 + 0x14), nullptr, nullptr, 
                    RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                return 0
            case &lookup_table_582c58[6]
                sub_57cc90(arg3)
                return 0
            case &lookup_table_582c58[0x1e]
                if (*(eax_2 + 0x3c) != 0)
                    sub_57ed40(arg1)
                    *(data_26a6554 + 0x3c) = 0
                
                return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
            case &lookup_table_582c58[0x85]
                return 4
            case &lookup_table_582c58[0x9f]
                goto label_582bf3
}
