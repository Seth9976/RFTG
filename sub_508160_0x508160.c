// 函数名称: sub_508160
// 虚拟地址: 0x508160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_508160()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t esi
    int32_t var_c = esi
    
    if (data_3078599 != 0)
        sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "VR.cpp", 0x190, "VRDraw")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    (*(*data_3078804 + 0xa4))(0)
    void* eax_2 = data_27e7fcc
    int32_t esi_1
    
    if (eax_2 == 0 || ((*(eax_2 + 0x3c) u>> 0xe).b & 1) == 0)
        esi_1 = 0
    else
        esi_1 = 1
    
    if ((*(*data_26a4500 + 0x18))() != 0)
        data_26a4600 = 1
        sub_507180()
        int32_t var_14_1 = esi_1
        sub_507aa0(0, (*(*data_3078804 + 0x94))())
        int32_t edx_4 = sub_507e10()
        
        if (esi_1 != 1)
            int32_t var_14_2 = esi_1
            sub_507aa0(1, edx_4)
            sub_507e10()
        
        int32_t* ecx_4 = data_3078804
        data_26a4600 = 0
        (*(*ecx_4 + 0x98))()
    
    (*(*data_3078804 + 0xa8))(0)
    (*(*data_3078804 + 0xa4))(1)
    
    if (*(data_27e7fd0 + 0x1c) == 0)
        goto label_50827e
    
    void* edx_8
    
    if (data_307881f != 0)
        int32_t eax_15 = data_26a4524
        edx_8 = *data_26a4500
        
        if (esi_1 != 1)
            (*(edx_8 + 0x1c))(&data_26a4568, *((eax_15 << 2) + &data_26a4504), 
                *((eax_15 << 2) + &data_26a4508))
        else
            int32_t eax_16 = *((eax_15 << 2) + &data_26a4504)
            (*(edx_8 + 0x1c))(&data_26a4568, eax_16, eax_16)
    else
        data_27e7fcc
    label_50827e:
        int32_t eax_12 = data_26a4524
        edx_8 = *data_26a4500
        
        if (esi_1 != 1)
            (*(edx_8 + 0x1c))(&data_26a4568, *((eax_12 << 2) + &data_26a450c), 
                *((eax_12 << 2) + &data_26a4510))
        else
            int32_t eax_13 = *((eax_12 << 2) + &data_26a450c)
            (*(edx_8 + 0x1c))(&data_26a4568, eax_13, eax_13)
    (*(*data_3078804 + 0xa8))(1)
    int32_t eax_21 = data_26a4524 + 1
    data_26a4524 = eax_21
    
    if (eax_21 == 1)
        data_26a4524 = 0
    
    return sub_54b920(0)
}
