// 函数名称: sub_506e40
// 虚拟地址: 0x506e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_506e40()
{
    // 第一条实际指令: int32_t result = data_27e7fd0
    int32_t result = data_27e7fd0
    
    if (*(result + 0x27) != 0)
        int32_t eax_1 = data_30785cc
        
        if (eax_1 == 1)
            int32_t* ecx_1 = data_26a4500
            
            if (ecx_1 == 0)
                data_30785cc = 0
            else if ((*(*ecx_1 + 0xc))() == 0)
                (*(*data_26a4500 + 8))()
                int32_t* ecx_3 = data_26a4500
                
                if (ecx_3 != 0)
                    (**ecx_3)(0)
                    int32_t eax_6 = data_26a4500
                    
                    if (eax_6 != 0)
                        _aligned_free_base(eax_6)
                
                data_26a4500 = 0
                
                if ((*(*nullptr + 0xc))() == 0)
                    (*(*data_26a4500 + 8))()
                    int32_t* ecx_6 = data_26a4500
                    
                    if (ecx_6 != 0)
                        (**ecx_6)(0)
                        int32_t eax_11 = data_26a4500
                        
                        if (eax_11 != 0)
                            _aligned_free_base(eax_11)
                    
                    bool cond:1_1 = data_30785cc != 1
                    data_26a4500 = 0
                    
                    if (not(cond:1_1))
                        data_30785cc = 0
                else
                    data_30785cc = 5
            else
                data_30785cc = 3
        else if (eax_1 != 3 && eax_1 != 5)
            sub_4c5870("Halt", &data_83f3d3, "VR.cpp", 0x68, "VRInitForApp")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        long double x87_r7_2 = float.t(0)
        data_26a456c = fconvert.s(fconvert.t(-0.0320000015f))
        data_26a4590 = 0x3f800000
        data_26a45a0 = 0x3f800000
        data_26a4610 = 0x3f800000
        long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(-0.032000001519918442) * x87_r7_2))
        data_26a4570 = fconvert.s(x87_r6_3)
        data_26a4574 = fconvert.s(x87_r6_3)
        data_26a4578 = fconvert.s(fconvert.t(0.0320000015f))
        data_26a4588 = 0
        data_26a4598 = 0
        long double x87_r7_4 = fconvert.t(fconvert.s(x87_r7_2 * fconvert.t(0.032000001519918442)))
        data_26a4608 = 0
        data_26a457c = fconvert.s(x87_r7_4)
        data_26a4580 = fconvert.s(x87_r7_4)
        result = 0
        data_26a4584 = 0
        data_26a458c = 0
        data_26a4594 = 0
        data_26a459c = 0
        data_26a4604 = 0
        data_26a460c = 0
    else if (data_30785cc != 0)
        sub_4c5870("gGlobalVRAppType == VRAPP_NONE", &data_83f3d3, "VR.cpp", 0x1e, "VRInitForApp")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    return result
}
